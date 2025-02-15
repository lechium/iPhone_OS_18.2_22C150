//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AppPredictionClient/NSObject-Protocol.h>

@class ATXDefaultWidgetStack, NSArray;

@protocol ATXDefaultHomeScreenItemTiler <NSObject>
+ (id)new;
@property(readonly, nonatomic) NSArray *tiledHomeScreenItems;
- (id)initWithDefaultStack:(ATXDefaultWidgetStack *)arg1 defaultWidgetsSmall:(NSArray *)arg2 defaultWidgetsMedium:(NSArray *)arg3 defaultWidgetsLarge:(NSArray *)arg4 defaultWidgetsExtraLarge:(NSArray *)arg5 widgetFamilyMask:(unsigned long long)arg6;
- (id)init;
@end

