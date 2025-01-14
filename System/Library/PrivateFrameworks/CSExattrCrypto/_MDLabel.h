//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _MDLabel : NSObject
{
    struct __CFDictionary *_attrs;	// 8 = 0x8
    struct __CFUUID *_uuid;	// 16 = 0x10
    struct __CFUUID *_userUUID;	// 24 = 0x18
    union {
        struct {
            unsigned int isMutuallyExclusiveSetMember:1;
            unsigned int isPublicVisibility:1;
            unsigned int hasPreviewIcon:1;
            unsigned int hasFinderColor:1;
            unsigned int setFinderColor:3;
            unsigned int hasExtendedFinderColor:1;
            unsigned int reservedBits1:8;
            unsigned int reservedBits2:16;
            unsigned int reservedBits3:32;
        } ;
        long long payload;
    } _attrBits;	// 32 = 0x20
}

- (void)updateAttrs:(struct __CFDictionary *)arg1;	// IMP=0x0000000000004f4b
- (void *)getAttr:(struct __CFString *)arg1;	// IMP=0x0000000000004f11
- (void)cleanAttrs;	// IMP=0x0000000000004f0b
- (id)getAttrFallback:(const struct __CFString **)arg1;	// IMP=0x0000000000004f03
- (void *)_copyXattrUpdatesKey;	// IMP=0x0000000000004efb
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000004ebf
- (unsigned long long)hash;	// IMP=0x0000000000004eb1
- (id)description;	// IMP=0x0000000000004e73
- (unsigned long long)_cfTypeID;	// IMP=0x0000000000004e47
- (void)dealloc;	// IMP=0x0000000000004dfb
- (id)initWithUUID:(struct __CFUUID *)arg1 attributes:(struct __CFDictionary *)arg2 forUserUUID:(struct __CFUUID *)arg3;	// IMP=0x0000000000004cad
- (CDStruct_bd2f613f)_getUUIDBytesForUserUUID:(struct __CFUUID *)arg1;	// IMP=0x0000000000004c03

@end

