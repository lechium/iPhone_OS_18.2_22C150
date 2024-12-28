//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ActivityAchievementsDaemon/NSObject-Protocol.h>

@class ACHTemplateStore, NSArray;

@protocol ACHTemplateStoreObserving <NSObject>
- (void)templateStore:(ACHTemplateStore *)arg1 didRemoveTemplates:(NSArray *)arg2;
- (void)templateStore:(ACHTemplateStore *)arg1 didAddNewTemplates:(NSArray *)arg2;

@optional
- (void)templateStoreDidFinishInitialFetch:(ACHTemplateStore *)arg1;
@end
