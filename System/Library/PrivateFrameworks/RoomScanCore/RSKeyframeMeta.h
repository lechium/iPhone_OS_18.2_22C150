//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSUUID;

@interface RSKeyframeMeta : NSObject
{
    NSUUID *_identifier;	// 8 = 0x8
    unsigned long long _size;	// 16 = 0x10
    double _timestamp;	// 24 = 0x18
    CDStruct_14d5dc5e _cameraPose;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000011cfc8
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000011cf63
- (id)init;	// IMP=0x000000000011cf28

@end

