//
//  UIImage+Water.h
//  LookPicture
//
//  Created by zhuke on 17/3/27.
//  Copyright © 2017年 beelieve. All rights reserved.
//  图片加水印

#import <UIKit/UIKit.h>


/*
 *  水印方向
 */
typedef enum {
    
    //左上
    ZKImageWaterDirectTopLeft=0,
    
    //右上
    ZKImageWaterDirectTopRight,
    
    //左下
    ZKImageWaterDirectBottomLeft,
    
    //右下
    ZKImageWaterDirectBottomRight,
    
    //正中
    ZKImageWaterDirectCenter
    
}ZKImageWaterDirect;

@interface UIImage (Water)

-(UIImage *)waterWithText:(NSString *)text direction:(ZKImageWaterDirect)direction fontColor:(UIColor *)fontColor fontPoint:(CGFloat)fontPoint marginXY:(CGPoint)marginXY;


-(UIImage *)waterWithWaterImage:(UIImage *)waterImage direction:(ZKImageWaterDirect)direction waterSize:(CGSize)waterSize  marginXY:(CGPoint)marginXY;



@end
