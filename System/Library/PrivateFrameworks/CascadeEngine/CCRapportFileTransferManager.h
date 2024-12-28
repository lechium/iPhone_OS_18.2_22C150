//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSURL;
@protocol BMAccessAssertion, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface CCRapportFileTransferManager : NSObject
{
    NSMutableDictionary *_fileTransferSessions;	// 8 = 0x8
    id <BMAccessAssertion> _accessAssertion;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_fileTransferQueue;	// 24 = 0x18
    NSURL *_directoryURL;	// 32 = 0x20
}

+ (id)defaultInstance;	// IMP=0x0060000000011e49
- (void).cxx_destruct;	// IMP=0x00000000000129ec
@property(readonly, nonatomic) NSURL *directoryURL; // @synthesize directoryURL=_directoryURL;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *fileTransferQueue; // @synthesize fileTransferQueue=_fileTransferQueue;
- (void)closeAllFileTransferSessions;	// IMP=0x0000000000012888
- (void)closeFileTransferSessionWithDeviceIdentifier:(id)arg1;	// IMP=0x0000000000012802
- (id)initiateFileTransferSesionBackToTargetDeviceWithIdentifier:(id)arg1 withExchangedPeerPublicKey:(id)arg2;	// IMP=0x000000000001258b
- (id)buildFileTransferSessionWithTargetDeviceIdentifier:(id)arg1;	// IMP=0x00000000000123bb
- (id)initWithDirectoryURL:(id)arg1 accessAssertion:(id)arg2;	// IMP=0x00000000000122cd

@end
