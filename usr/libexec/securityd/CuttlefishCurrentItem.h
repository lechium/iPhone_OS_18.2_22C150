//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CKRecord, CuttlefishCurrentItemSpecifier;

@interface CuttlefishCurrentItem : NSObject
{
    CuttlefishCurrentItemSpecifier *_itemPtr;	// 8 = 0x8
    CKRecord *_item;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x002000000021a651
- (void).cxx_destruct;	// IMP=0x002000000021a629
@property(retain) CKRecord *item; // @synthesize item=_item;
@property(retain) CuttlefishCurrentItemSpecifier *itemPtr; // @synthesize itemPtr=_itemPtr;
- (id)initWithCoder:(id)arg1;	// IMP=0x001000000021a509
- (void)encodeWithCoder:(id)arg1;	// IMP=0x001000000021a45b
- (id)description;	// IMP=0x001000000021a3ef
- (id)init:(id)arg1 item:(id)arg2;	// IMP=0x001000000021a356

@end
