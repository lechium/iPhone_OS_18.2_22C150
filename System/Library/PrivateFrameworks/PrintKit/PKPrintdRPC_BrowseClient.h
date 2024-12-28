//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary;
@protocol PKPrintdRPC_BrowseClient_ClientProtocol;

__attribute__((visibility("hidden")))
@interface PKPrintdRPC_BrowseClient
{
    NSDictionary *_infoDictionary;	// 24 = 0x18
    unsigned long long _provenance;	// 32 = 0x20
    id <PKPrintdRPC_BrowseClient_ClientProtocol> _delegate;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000003fef
- (void)invalidate;	// IMP=0x0000000000003fc0
- (void)startBrowsing;	// IMP=0x0000000000003f1e
- (id)ptConn_locked;	// IMP=0x0000000000003da9
- (id)initWithInfo:(id)arg1 provenance:(unsigned long long)arg2 delegate:(id)arg3;	// IMP=0x0000000000003cb7

@end
