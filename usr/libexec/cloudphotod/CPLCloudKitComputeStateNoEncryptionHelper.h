//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSFileManager, NSString;

@interface CPLCloudKitComputeStateNoEncryptionHelper : NSObject
{
    NSFileManager *_fm;	// 8 = 0x8
    NSData *_prefix;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0020000000041f81
@property(readonly, nonatomic) NSData *prefix; // @synthesize prefix=_prefix;
- (_Bool)decryptFileAtURL:(id)arg1 outputFileURL:(id)arg2 error:(id *)arg3;	// IMP=0x0010000000041bea
- (_Bool)encryptFileAtURL:(id)arg1 outputFileURL:(id)arg2 error:(id *)arg3;	// IMP=0x0010000000041a4f
- (void)shutdown;	// IMP=0x0010000000041a49
- (void)start;	// IMP=0x0010000000041a43
- (id)init;	// IMP=0x0010000000041a2a
- (id)initWithPrefix:(id)arg1;	// IMP=0x001000000004196e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

