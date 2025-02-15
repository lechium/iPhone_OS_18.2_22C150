//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface ASCLockupFeatureSafariExtension : NSObject
{
    NSString *_contentProviderTeamID;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0020000000017e26
- (void).cxx_destruct;	// IMP=0x002000000001816b
@property(readonly, copy, nonatomic) NSString *contentProviderTeamID; // @synthesize contentProviderTeamID=_contentProviderTeamID;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000017fb1
@property(readonly) unsigned long long hash;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000017f2b
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0010000000017ebb
- (id)initWithCoder:(id)arg1;	// IMP=0x0010000000017e2e
- (id)initWithContentProviderTeamID:(id)arg1;	// IMP=0x0010000000017db3

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) Class superclass;

@end

