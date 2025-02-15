//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSString, PRSSearchSession;

__attribute__((visibility("hidden")))
@interface QueryController : NSObject
{
    double _gSessionStartTime;	// 8 = 0x8
    NSDictionary *_cep_server_values;	// 16 = 0x10
    PRSSearchSession *_session;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000000fa65
@property(retain) PRSSearchSession *session; // @synthesize session=_session;
@property(retain) NSDictionary *cep_server_values; // @synthesize cep_server_values=_cep_server_values;
@property double gSessionStartTime; // @synthesize gSessionStartTime=_gSessionStartTime;
- (void)updateCorrectionDict:(id)arg1;	// IMP=0x000000000000f99c
- (void)sessionReceivedBagWithEnabledDomains:(id)arg1;	// IMP=0x000000000000f8cd
- (id)supportedDomainIdentifiers;	// IMP=0x000000000000f8c5
@property(readonly, nonatomic, getter=isEnabled) _Bool enabled;
@property(readonly, nonatomic) double sessionStartTime;
- (void)setCepServerValues:(id)arg1;	// IMP=0x000000000000f8a1
- (void)setUserId:(id)arg1;	// IMP=0x000000000000f89b
- (id)userId;	// IMP=0x000000000000f893
- (id)init;	// IMP=0x000000000000f864
@property(readonly, nonatomic) NSArray *excludedDomainIdentifiers;
@property(readonly, nonatomic) NSString *applicationNameForUserAgent;
- (id)createResultObject;	// IMP=0x000000000000f709

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

