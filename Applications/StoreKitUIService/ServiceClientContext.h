//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <StoreKitUI/SKUIClientContext.h>

@class NSString;

@interface ServiceClientContext : SKUIClientContext
{
    NSString *_hostApplicationIdentifier;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x002000000000e9ea
@property(copy, nonatomic) NSString *hostApplicationIdentifier; // @synthesize hostApplicationIdentifier=_hostApplicationIdentifier;
- (void)getDefaultMetricsControllerWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x001000000000e8d4
- (id)initWithConfigurationDictionary:(id)arg1;	// IMP=0x001000000000e81a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

