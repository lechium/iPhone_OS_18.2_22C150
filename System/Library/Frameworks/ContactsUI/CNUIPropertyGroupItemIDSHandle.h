//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CNContactProperty, CNUIContactPropertyIDSHandle, NSString;

__attribute__((visibility("hidden")))
@interface CNUIPropertyGroupItemIDSHandle : NSObject
{
    CNContactProperty *_contactProperty;	// 8 = 0x8
    CNUIContactPropertyIDSHandle *_contactPropertyHandle;	// 16 = 0x10
}

+ (_Bool)supportsPropertyGroupItem:(id)arg1;	// IMP=0x001000000034f070
+ (_Bool)isSupportedGroupItem:(id)arg1;	// IMP=0x001000000034f063
- (void).cxx_destruct;	// IMP=0x000000000034ef0e
@property(readonly, nonatomic) CNUIContactPropertyIDSHandle *contactPropertyHandle; // @synthesize contactPropertyHandle=_contactPropertyHandle;
@property(readonly, copy, nonatomic) CNContactProperty *contactProperty; // @synthesize contactProperty=_contactProperty;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000034edf2
@property(readonly, copy) NSString *description;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000034ed41
@property(readonly, copy, nonatomic) NSString *_cnui_IDSIDRepresentation;
- (id)initWithPropertyGroupItem:(id)arg1;	// IMP=0x000000000034eace

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) Class superclass;

@end
