//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _UICommandChange : NSObject
{
    id _anchor;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00100000017634c3
- (void).cxx_destruct;	// IMP=0x00000000017637ca
@property(readonly, nonatomic) id anchor; // @synthesize anchor=_anchor;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000001763761
- (unsigned long long)hash;	// IMP=0x000000000176374b
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000001763728
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000176371d
- (_Bool)acceptBoolItemInsertionVisit:(CDUnknownBlockType)arg1 itemDeletionVisit:(CDUnknownBlockType)arg2 menuInsertionVisit:(CDUnknownBlockType)arg3 menuDeletionVisit:(CDUnknownBlockType)arg4;	// IMP=0x00000000017636a0
- (void)acceptItemInsertionVisit:(CDUnknownBlockType)arg1 itemDeletionVisit:(CDUnknownBlockType)arg2 menuInsertionVisit:(CDUnknownBlockType)arg3 menuDeletionVisit:(CDUnknownBlockType)arg4;	// IMP=0x0000000001763626
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000176353e
- (id)initWithAnchor:(id)arg1;	// IMP=0x00000000017634cb

@end
