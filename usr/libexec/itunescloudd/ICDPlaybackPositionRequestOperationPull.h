//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class ICDPlaybackPositionRequestContext, ICPlaybackPositionEntity, NSString;

@interface ICDPlaybackPositionRequestOperationPull
{
    ICDPlaybackPositionRequestContext *_context;	// 8 = 0x8
    CDUnknownBlockType _completionHandler;	// 16 = 0x10
    NSString *_urlBagKey;	// 24 = 0x18
    ICPlaybackPositionEntity *_resultEntity;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0020000000051487
- (void)_finishWithError:(id)arg1;	// IMP=0x0010000000051427
- (void)_finishWithResponse:(id)arg1 error:(id)arg2;	// IMP=0x0010000000051261
- (id)_baseRequestWithURL:(id)arg1;	// IMP=0x0010000000050f20
- (id)_requestItemVersion;	// IMP=0x0010000000050dd6
- (void)execute;	// IMP=0x0010000000050b25
- (id)initWithRequestContext:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000050a5f

@end

