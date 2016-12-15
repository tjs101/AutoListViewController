//
//  TJSListTableViewCell.h
//  AutoListViewController
//  配合TJSListViewController使用
//  Created by quentin on 2016/11/11.
//  Copyright © 2016年 Quentin. All rights reserved.
//

#import "TJSTableViewCell.h"

@interface TJSListTableViewCell : TJSTableViewCell

@property (nonatomic, strong) TJSModel *model;/**<SRModel*/

- (void)didSelectRow;// 选中行

+ (CGFloat)heightWithModel:(TJSModel *)model;// 高度

@end
