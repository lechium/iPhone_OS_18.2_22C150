//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSMutableSet, NSString;

@interface SOSAccountTrust : NSObject
{
    NSMutableDictionary *expansion;	// 8 = 0x8
    struct __OpaqueSOSFullPeerInfo *fullPeerInfo;	// 16 = 0x10
    struct __OpaqueSOSPeerInfo *peerInfo;	// 24 = 0x18
    NSString *peerID;	// 32 = 0x20
    struct __OpaqueSOSCircle *trustedCircle;	// 40 = 0x28
    NSMutableSet *retirees;	// 48 = 0x30
    int departureCode;	// 56 = 0x38
    struct __SecKey *_cachedOctagonSigningKey;	// 64 = 0x40
    struct __SecKey *_cachedOctagonEncryptionKey;	// 72 = 0x48
}

+ (id)trust;	// IMP=0x004000000026df81
- (void).cxx_destruct;	// IMP=0x002000000026df4e
@property(nonatomic) int departureCode; // @synthesize departureCode;
@property(retain, nonatomic) NSMutableDictionary *expansion; // @synthesize expansion;
@property(nonatomic) struct __OpaqueSOSFullPeerInfo *fullPeerInfo; // @synthesize fullPeerInfo;
@property(retain, nonatomic) NSMutableSet *retirees; // @synthesize retirees;
@property(nonatomic) struct __OpaqueSOSCircle *trustedCircle; // @synthesize trustedCircle;
@property struct __SecKey *cachedOctagonSigningKey; // @synthesize cachedOctagonSigningKey=_cachedOctagonSigningKey;
@property struct __SecKey *cachedOctagonEncryptionKey; // @synthesize cachedOctagonEncryptionKey=_cachedOctagonEncryptionKey;
@property(readonly, nonatomic) NSString *peerID;
@property(readonly, nonatomic) struct __OpaqueSOSPeerInfo *peerInfo;
- (void)dealloc;	// IMP=0x001000000026dd27
- (id)initWithRetirees:(id)arg1 fpi:(struct __OpaqueSOSFullPeerInfo *)arg2 circle:(struct __OpaqueSOSCircle *)arg3 departureCode:(int)arg4 peerExpansion:(id)arg5;	// IMP=0x001000000026dc48
- (id)init;	// IMP=0x001000000026db5d

@end

