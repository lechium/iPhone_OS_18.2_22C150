//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSURL;

@interface SKGConfig : NSObject
{
    NSString *_resourcePath;	// 8 = 0x8
    NSURL *_configURL;	// 16 = 0x10
    long long _currentResourceVersion;	// 24 = 0x18
    long long _currentReleaseVersion;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0020000000027647
- (void)updateConfig;	// IMP=0x001000000002744d
- (void)readConfig;	// IMP=0x0010000000027189
@property(readonly, nonatomic) long long releaseVersion;
@property(readonly, nonatomic) long long resourceVersion;
@property(readonly, nonatomic) NSString *resourcePath;
- (id)initWithConfigPath:(id)arg1 resourceDirectoryPath:(id)arg2 resourceVersion:(long long)arg3;	// IMP=0x0010000000027085
- (id)initWithConfigPath:(id)arg1;	// IMP=0x0010000000026fe1

@end

