//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface AKRemoteViewServiceConfiguration : NSObject
{
    NSString *_hostBundleID;	// 8 = 0x8
    NSString *_hostSceneID;	// 16 = 0x10
}

+ (id)defaultConfiguration;	// IMP=0x00200000000dc206
+ (id)configurationForHostWithBundleID:(id)arg1 sceneID:(id)arg2;	// IMP=0x00100000000dc16a
+ (_Bool)supportsSecureCoding;	// IMP=0x00100000000dc025
- (void).cxx_destruct;	// IMP=0x00200000000dc251
@property(copy, nonatomic) NSString *hostSceneID; // @synthesize hostSceneID=_hostSceneID;
@property(copy, nonatomic) NSString *hostBundleID; // @synthesize hostBundleID=_hostBundleID;
- (id)initWithCoder:(id)arg1;	// IMP=0x00100000000dc090
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00100000000dc02d

@end
