//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSError, NSString;

__attribute__((visibility("hidden")))
@interface _SSBDatabaseUpdateFetchDataSessionHandler : NSObject
{
    struct unique_ptr<Backend::Google::FetchThreatListUpdatesResponseParser, std::default_delete<Backend::Google::FetchThreatListUpdatesResponseParser>> _parser;	// 8 = 0x8
    struct shared_ptr<ByteProvider> _byteProvider;	// 16 = 0x10
    unsigned long long _receivedBytes;	// 32 = 0x20
    NSError *_error;	// 40 = 0x28
    int _provider;	// 48 = 0x30
}

- (id).cxx_construct;	// IMP=0x00000000000056f9
- (void).cxx_destruct;	// IMP=0x00000000000056ae
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;	// IMP=0x0000000000005335
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;	// IMP=0x0000000000005157
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000000050d2
- (id)initWithCompletionHandler:(void *)arg1 provider:(int)arg2;	// IMP=0x0000000000004bd4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

