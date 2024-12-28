//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class FCReadonlyPersonalizationAggregateStore;
@protocol FCFeedPersonalizing, FCNewsAppConfigurationManager, FCTodayPrivateData;

@protocol FCFeedPersonalizerFactoryType <NSObject>
- (id <FCFeedPersonalizing>)newFeedPersonalizerWithAggregateStore:(FCReadonlyPersonalizationAggregateStore *)arg1 appConfigurationManager:(id <FCNewsAppConfigurationManager>)arg2 todayPrivateData:(id <FCTodayPrivateData>)arg3;
@end
