//
//  LLImageCropToolBar.h
//
//  Created by 李世航 on 2018/12/3.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@protocol LLImageCropToolBarDelegate <NSObject>

- (void)rotatingAction;

- (void)originalAction;

- (void)cancelAction;

- (void)doneAction;

@end

@interface LLImageCropToolBar : UIView
@property (nonatomic, weak) id<LLImageCropToolBarDelegate> delegate;
@end

NS_ASSUME_NONNULL_END
