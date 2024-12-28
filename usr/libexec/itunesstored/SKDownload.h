//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSError, NSNumber, NSString, NSURL, SKPaymentTransaction;

@interface SKDownload : NSObject
{
    id _internal;	// 8 = 0x8
}

+ (void)deleteContentForProductID:(id)arg1;	// IMP=0x0040000000012b1e
+ (id)contentURLForProductID:(id)arg1;	// IMP=0x0010000000012b16
- (void).cxx_destruct;	// IMP=0x0020000000012eb6
- (id)copyXPCEncoding;	// IMP=0x0010000000012daa
- (id)initWithXPCEncoding:(id)arg1;	// IMP=0x0010000000012b24
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000000129d4
- (void)_setVersion:(id)arg1;	// IMP=0x00100000000129a3
- (void)_setTransaction:(id)arg1;	// IMP=0x0010000000012903
- (void)_setTimeRemaining:(double)arg1;	// IMP=0x00100000000128f4
- (void)_setProgress:(float)arg1;	// IMP=0x00100000000128e5
- (void)_setError:(id)arg1;	// IMP=0x00100000000128b4
- (void)_setDownloadState:(long long)arg1;	// IMP=0x00100000000128a6
- (void)_setContentURL:(id)arg1;	// IMP=0x0010000000012875
- (void)_setContentLength:(id)arg1;	// IMP=0x0010000000012844
- (void)_setContentIdentifier:(id)arg1;	// IMP=0x0010000000012813
@property(copy, nonatomic, getter=_downloadID, setter=_setDownloadID:) NSNumber *_downloadID;
- (void)_applyChangeset:(id)arg1;	// IMP=0x001000000001261f
@property(readonly, nonatomic) SKPaymentTransaction *transaction;
@property(readonly, nonatomic) double timeRemaining;
@property(readonly, nonatomic) NSError *error;
@property(readonly, nonatomic) NSString *contentVersion;
@property(readonly, nonatomic) long long contentLength;
@property(readonly, nonatomic) float progress;
@property(readonly, nonatomic) NSURL *contentURL;
@property(readonly, nonatomic) long long downloadState;
@property(readonly, nonatomic) long long state;
@property(readonly, nonatomic) NSString *contentIdentifier;
- (id)init;	// IMP=0x00100000000124f0

@end
