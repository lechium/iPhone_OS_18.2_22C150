//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ContactsUI/NSObject-Protocol.h>

@class NSString;
@protocol CNUIUserActionListDataSource;

@protocol CNUIUserActionListDataSourceDelegate <NSObject>
- (void)userActionListDataSource:(id <CNUIUserActionListDataSource>)arg1 didResolveInitialActionsForActionType:(NSString *)arg2 contactIdentifier:(NSString *)arg3;
- (void)userActionListDataSource:(id <CNUIUserActionListDataSource>)arg1 willResolveInitialActionsForActionType:(NSString *)arg2 contactIdentifier:(NSString *)arg3;
@end
