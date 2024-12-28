//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "GEOAbstractTicket.h"

@class GEOWiFiQualityServiceRequest, NSString;

__attribute__((visibility("hidden")))
@interface _GEOMapServiceWiFiQualityLookupTicket : GEOAbstractTicket
{
    GEOWiFiQualityServiceRequest *_request;	// 40 = 0x28
    NSString *_tileKey;	// 48 = 0x30
    NSString *_eTag;	// 56 = 0x38
    NSString *_requestID;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x000000000070acc4
@property(readonly, nonatomic) CDStruct_026435ec dataRequestKind;
- (void)_cancel;	// IMP=0x000000000070ac3c
- (void)cancelTileLoad;	// IMP=0x000000000070ac2a
- (void)submitTileLoadWithCompletionQueue:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000070a906
- (void)cancelLocationSearch;	// IMP=0x000000000070a8b2
- (void)submitLocationSearchWithCompletionQueue:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000070a79d
- (void)cancelNetworkSearch;	// IMP=0x000000000070a78b
- (void)submitNetworkSearchWithCompletionQueue:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000070a4fc
- (id)initWithTileKey:(id)arg1 eTag:(id)arg2 requestId:(id)arg3;	// IMP=0x000000000070a465
- (id)initWithRequest:(id)arg1 requestId:(id)arg2;	// IMP=0x000000000070a403
- (id)initWithRequestID:(id)arg1;	// IMP=0x000000000070a393

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
