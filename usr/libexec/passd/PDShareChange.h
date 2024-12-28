//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, PKPassShare;

@interface PDShareChange : NSObject
{
    PKPassShare *_updatedShare;	// 8 = 0x8
    PKPassShare *_oldShare;	// 16 = 0x10
    NSString *_sender;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x002000000035c1d8
@property(retain, nonatomic) NSString *sender; // @synthesize sender=_sender;
@property(retain, nonatomic) PKPassShare *oldShare; // @synthesize oldShare=_oldShare;
@property(retain, nonatomic) PKPassShare *updatedShare; // @synthesize updatedShare=_updatedShare;
- (unsigned long long)_sharedEntitlementsChangeType;	// IMP=0x001000000035be02
@property(readonly, nonatomic) unsigned long long type;

@end
