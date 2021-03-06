//
//  CRGoodsNameTableViewCell.h
//  CRVisibleCellsDemo
//
//  Created by Charon on 17/2/8.
//  Copyright © 2017年 Charon. All rights reserved.
//

#import <UIKit/UIKit.h>

extern NSString * const kCRGoodsNameTableViewCellIdentifier;

@interface CRGoodsNameTableViewCell : UITableViewCell

- (void)configWithGoodsName:(NSString *)goodsName;

+ (CGFloat)cellHeightWithGoodsName:(NSString *)goodsName;

@end
