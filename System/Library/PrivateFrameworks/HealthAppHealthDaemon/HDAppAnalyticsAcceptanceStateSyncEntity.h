//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface HDAppAnalyticsAcceptanceStateSyncEntity : NSObject
{
}

+ (void)syncDidFinishWithResult:(long long)arg1 stateStore:(id)arg2 profile:(id)arg3;	// IMP=0x001000000001a920
+ (_Bool)updateDataWithStateStorage:(id)arg1 profile:(id)arg2 transaction:(id)arg3 error:(id *)arg4;	// IMP=0x001000000001a860
+ (id)stateEntitySchema;	// IMP=0x001000000001a6f0
- (void).cxx_destruct;	// IMP=0x000000000001a9e0
- (id)init;	// IMP=0x000000000001a980

@end
