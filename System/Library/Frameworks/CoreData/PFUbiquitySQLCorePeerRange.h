//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSNumber, NSString;

__attribute__((visibility("hidden")))
@interface PFUbiquitySQLCorePeerRange : NSObject
{
    NSString *_owningPeerID;	// 8 = 0x8
    NSString *_entityName;	// 16 = 0x10
    NSNumber *_rangeStart;	// 24 = 0x18
    NSNumber *_rangeEnd;	// 32 = 0x20
    NSNumber *_peerStart;	// 40 = 0x28
    NSNumber *_peerEnd;	// 48 = 0x30
}

- (id)description;	// IMP=0x000000000035715c
- (void)dealloc;	// IMP=0x00000000003570d7
- (id)initWithOwningPeerID:(id)arg1 entityName:(id)arg2 rangeStart:(id)arg3 rangeEnd:(id)arg4 peerStart:(id)arg5 peerEnd:(id)arg6;	// IMP=0x0000000000357042

@end

