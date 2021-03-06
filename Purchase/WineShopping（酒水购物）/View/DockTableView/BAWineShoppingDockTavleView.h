//
//  BAWineShoppingDockTavleView.h
//  酒吧助手
//
//  Created by 叶星龙 on 15/5/22.
//  Copyright (c) 2015年 北京局外者科技有限公司. All rights reserved.
//

#import <UIKit/UIKit.h>


@protocol DockTavleViewDelegate <NSObject>

-(void)dockClickindexPathRow:(NSMutableArray *)row  index:(NSIndexPath *)index indeXPath:(NSIndexPath *)indexPath;


@end

@interface BAWineShoppingDockTavleView : UITableView

@property (nonatomic ,strong) NSMutableArray *dockArray;


@property (weak ,nonatomic) id <DockTavleViewDelegate>dockDelegate;

@end
