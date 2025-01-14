//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSDictionary, NSString;

@interface AISSignOutContext : NSObject
{
    MISSING_TYPE *accountAltDSIDsByService;	// 8 = 0x8
    MISSING_TYPE *shouldRemoveDeviceUser;	// 16 = 0x10
    MISSING_TYPE *machineIdToSignOut;	// 24 = 0x18
    MISSING_TYPE *type;	// 40 = 0x28
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00100000001509a0
- (void).cxx_destruct;	// IMP=0x0000000000151c00
- (id)init;	// IMP=0x0000000000151ba0
- (id)initWith:(id)arg1 type:(long long)arg2;	// IMP=0x0000000000151ad0
- (id)initWithAltDSID:(id)arg1 machineIdToSignOut:(id)arg2 type:(long long)arg3;	// IMP=0x0000000000151980
- (id)initWithAccountAltDSIDsByService:(id)arg1;	// IMP=0x0000000000151570
- (id)initWithAltDSID:(id)arg1 type:(long long)arg2;	// IMP=0x0000000000151410
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000001513b0
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000150dd0
@property(nonatomic, readonly) long long type; // @synthesize type;
@property(nonatomic, readonly) NSString *machineIdToSignOut;
@property(nonatomic, readonly) NSString *altDSID;
@property(nonatomic, readonly) _Bool shouldRemoveDeviceUser; // @synthesize shouldRemoveDeviceUser;
@property(nonatomic, readonly) NSDictionary *accountAltDSIDsByService;
@property(nonatomic, readonly) NSString *description;

@end

