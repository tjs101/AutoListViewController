//
//  TJSListViewController.h
//  AutoListViewController
//  纯列表基类
//  classNameOfCell需要继承TJSListTableViewCell
//  classNameOfModel需要继承SRModel
//  内含分页逻辑，传递参数是不需要传递分页参数
//  Created by quentin on 2016/11/10.
//  Copyright © 2016年 Quentin. All rights reserved.
//

#import "TJSTableViewController.h"

@interface TJSListViewController : TJSTableViewController

- (instancetype)initWithURL:(NSString *)url parameters:(NSDictionary *)parameters classNameOfCell:(NSString *)classNameOfCell classNameOfModel:(NSString *)classNameOfModel;

@property (nonatomic, assign) BOOL autoCacheData;/**<是否自动进行缓存，默认为NO，不使用自动缓存*/
@property (nonatomic, copy) NSString *nullDataDesc;/**<没有数据的描述，默认为“没有任何数据”*/
@property (nonatomic, assign) BOOL showCellState;/**<设置cell背景，默认为YES*/

- (void)changeParmeters:(NSDictionary *)parmeters;// 同一个接口、Cell、Model切换传入参数差异
- (void)changeParmeters:(NSDictionary *)parmeters url:(NSString *)url;// 同一Cell、Model切换传入参数差异
- (void)changeParmeters:(NSDictionary *)parmeters url:(NSString *)url classNameOfCell:(NSString *)classNameOfCell;// 同一Model切换传入参数差异
- (void)changeParmeters:(NSDictionary *)parmeters url:(NSString *)url classNameOfCell:(NSString *)classNameOfCell classNameOfModel:(NSString *)classNameOfModel;// 切换传入参数差异

@end
