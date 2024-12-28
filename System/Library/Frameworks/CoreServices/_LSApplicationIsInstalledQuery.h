//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "_LSQuery.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface _LSApplicationIsInstalledQuery : _LSQuery
{
    NSString *_bundleIdentifier;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0060000000020b45
+ (id)queryWithBundleIdentifier:(id)arg1;	// IMP=0x0060000000020614
- (void).cxx_destruct;	// IMP=0x0000000000020cab
@property(readonly, copy, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000020bd0
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000020b4d
- (_Bool)_requiresDatabaseMappingEntitlement;	// IMP=0x0000000000020b3d
- (void)_enumerateWithXPCConnection:(id)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x00000000000206af

@end
