# LLImageCropViewController

## 功能

裁剪图片

## 属性

属性 | 说明 | 类型 | 默认值
---|---|---|---
delegate|事件代理|LLImageCropViewControllerDelegate|-
image|初始化传入图片|UIImage 只读类型|-
cropView|裁剪视图view|LLImageCropView 只读类型|-
toolbar|裁剪工具栏|LLImageCropToolBar 只读类型|-
croppingStyle|裁剪框样式|LLCropViewCroppingStyle 只读类型|-
onDidFinishCancelled|完成时调用|block|-
onDidCropImageToRect|裁剪区域和角度，完成时调用|block|-
onDidCropToRect|裁剪图片、裁剪区域和角度，完成时调用|block|-
onDidCropToCircleImage|圆形裁剪器完成时回调|block|-

## 方法

```objective-c
/**
 初始化

 @param image 要裁剪的图片
 @return self
 */
- (nonnull instancetype)initWithImage:(nonnull UIImage *)image;

/**
 初始化

 @param style 裁剪器样式
 @param image 要裁剪的图片
 @return self
 */
- (nonnull instancetype)initWithCroppingStyle:(LLCropViewCroppingStyle)style image:(nonnull UIImage *)image;
```

## delegate

```objective-c
@optional
/**
 提供当前裁剪的矩形

 @param cropViewController self
 @param cropRect 矩形大小
 @param angle 角度
 */
- (void)cropViewController:(nonnull LLImageCropViewController *)cropViewController didCropImageToRect:(CGRect)cropRect angle:(NSInteger)angle;


/**
 获取裁剪后的图片

 @param cropViewController self
 @param image image
 @param cropRect 裁剪的image坐标
 @param angle 角度
 */
- (void)cropViewController:(nonnull LLImageCropViewController *)cropViewController didCropToImage:(nonnull UIImage *)image withRect:(CGRect)cropRect angle:(NSInteger)angle;


/**
 获取圆形模板裁剪的图片

 @param cropViewController self
 @param image image
 @param cropRect 裁剪的image坐标
 @param angle 角度
 */
- (void)cropViewController:(nonnull LLImageCropViewController *)cropViewController didCropToCircularImage:(nonnull UIImage *)image withRect:(CGRect)cropRect angle:(NSInteger)angle;


/**
 完成时调用

 @param cropViewController self
 @param cancelled YES
 */
- (void)cropViewController:(nonnull LLImageCropViewController *)cropViewController didFinishCancelled:(BOOL)cancelled;
```

## 基础用法

- 导入头文件

```objective-c

```

```objective-c
LLImageCropViewController * vc = [[LLImageCropViewController alloc] initWithImage:previewImage];
vc.onDidCropToRect              = ^(UIImage * _Nonnull image, CGRect cropRect, NSInteger angle) {
    [vc dismissViewControllerAnimated:NO completion:^{
        
    }];
};
[strongSelf presentViewController:vc animated:YES completion:nil];
```


