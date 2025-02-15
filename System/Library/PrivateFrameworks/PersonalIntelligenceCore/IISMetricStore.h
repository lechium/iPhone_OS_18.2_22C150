//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface IISMetricStore : NSObject
{
    MISSING_TYPE *storageLock;	// 8 = 0x8
    MISSING_TYPE *windowStartDate;	// 94208 = 0x17000
    MISSING_TYPE *configuration;	// 0 = 0x0
    MISSING_TYPE *enrichmentProviders;	// 94208 = 0x17000
    MISSING_TYPE *messageListeners;	// 5 = 0x5
    MISSING_TYPE *sendInterval;	// 19 = 0x13
}

+ (id)sharedInstance;	// IMP=0x004000000000a85c
- (void).cxx_destruct;	// IMP=0x000000000000f156
- (_Bool)shouldSendMessages;	// IMP=0x000000000000e23c
- (_Bool)sendMessagesWithShouldContinue:(CDUnknownBlockType)arg1;	// IMP=0x000000000000e0f0
- (void)registerMessageListener:(CDUnknownBlockType)arg1;	// IMP=0x000000000000bc30
- (void)registerEnrichmentProvider:(id)arg1;	// IMP=0x000000000000bb40
- (void)removeAllMetricsWithPrefix:(id)arg1;	// IMP=0x000000000000ba71
- (id)saveMessage:(id)arg1 backend:(unsigned char)arg2 messageIdentifier:(id)arg3;	// IMP=0x000000000000b881
- (id)init;	// IMP=0x000000000000b353

@end

