//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class NSString, NSUUID;

__attribute__((visibility("hidden")))
@interface HMDPhotoLibraryPerson : HMFObject
{
    NSUUID *_UUID;	// 8 = 0x8
    NSString *_name;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000046984c
@property(readonly, copy) NSString *name; // @synthesize name=_name;
@property(readonly, copy) NSUUID *UUID; // @synthesize UUID=_UUID;
- (id)attributeDescriptions;	// IMP=0x00000000004696c1
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000004696b6
- (unsigned long long)hash;	// IMP=0x0000000000469672
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000469534
- (void)updateHMPerson:(id)arg1;	// IMP=0x0000000000469494
- (id)createHMPerson;	// IMP=0x0000000000469401
- (id)initWithUUID:(id)arg1 name:(id)arg2;	// IMP=0x0000000000469325
- (id)initWithHMPerson:(id)arg1;	// IMP=0x000000000046925a

@end

