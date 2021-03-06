//
//  BARightCell.h
//  酒吧助手
//
//  Created by 叶星龙 on 15/5/22.
//  Copyright (c) 2015年 北京局外者科技有限公司. All rights reserved.
//

#import <UIKit/UIKit.h>



@interface BARightCell : UITableViewCell

@property (nonatomic ,strong) NSMutableDictionary *rightData;

+ (instancetype)cellWithTableView:(UITableView *)tableView;

@property (nonatomic , copy) void (^TapActionBlock)(NSInteger pageIndex ,NSInteger money ,NSString *key);
@end
