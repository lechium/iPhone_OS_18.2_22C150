//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSSet;

__attribute__((visibility("hidden")))
@interface VNDisallowedList : NSObject
{
    NSSet *_identifiers;	// 8 = 0x8
}

+ (id)disallowedListFromUTF8StringArray:(const char **)arg1;	// IMP=0x0010000000332482
+ (id)sceneNetV5;	// IMP=0x001000000019eee2
+ (id)sceneNetV3;	// IMP=0x001000000019eeb2
- (void).cxx_destruct;	// IMP=0x0000000000332472
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000332467
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000003323fe
- (unsigned long long)hash;	// IMP=0x00000000003323e8
- (_Bool)containsIdentifier:(id)arg1;	// IMP=0x00000000003323d2
@property(readonly, copy) NSSet *allIdentifiers;
@property(readonly) unsigned long long identifierCount;
- (id)initWithIdentifiers:(id)arg1;	// IMP=0x000000000033232b

@end

