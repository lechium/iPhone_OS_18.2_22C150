//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSOperation.h>

@class NSError, NSMutableData, NSString, NSURLConnection, NSURLRequest, NSURLResponse;

__attribute__((visibility("hidden")))
@interface SUHttpOperation : NSOperation
{
    NSURLConnection *_connection;	// 8 = 0x8
    NSURLRequest *_request;	// 16 = 0x10
    NSMutableData *_data;	// 24 = 0x18
    NSURLResponse *_response;	// 32 = 0x20
    NSError *_error;	// 40 = 0x28
    long long _statusCode;	// 48 = 0x30
    _Bool _allowRedirects;	// 56 = 0x38
    _Bool _done;	// 57 = 0x39
    _Bool _saveData;	// 58 = 0x3a
}

- (void).cxx_destruct;	// IMP=0x000000000000265a
@property(nonatomic) long long statusCode; // @synthesize statusCode=_statusCode;
@property(nonatomic) _Bool allowRedirects; // @synthesize allowRedirects=_allowRedirects;
@property(retain, nonatomic) NSMutableData *data; // @synthesize data=_data;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) NSURLResponse *response; // @synthesize response=_response;
@property(retain, nonatomic) NSURLRequest *request; // @synthesize request=_request;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;	// IMP=0x00000000000024da
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;	// IMP=0x00000000000023d0
- (id)connection:(id)arg1 willSendRequest:(id)arg2 redirectResponse:(id)arg3;	// IMP=0x00000000000021a8
- (void)connection:(id)arg1 didFailWithError:(id)arg2;	// IMP=0x0000000000002127
- (void)connectionDidFinishLoading:(id)arg1;	// IMP=0x00000000000020fa
- (void)_finished;	// IMP=0x00000000000020e9
- (void)main;	// IMP=0x000000000000204a
- (id)initWithRequest:(id)arg1;	// IMP=0x0000000000001fca

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
