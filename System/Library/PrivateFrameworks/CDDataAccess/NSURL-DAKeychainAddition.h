//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSURL.h>

@interface NSURL (DAKeychainAddition)
+ (int)da_classicPortForScheme:(id)arg1;	// IMP=0x008000000001b642
+ (id)da_URLWithScheme:(id)arg1 host:(id)arg2 port:(int)arg3 uri:(id)arg4;	// IMP=0x008000000001b61a
+ (id)da_URLWithScheme:(id)arg1 host:(id)arg2 user:(id)arg3 port:(int)arg4 uri:(id)arg5;	// IMP=0x008000000001b46b
+ (id)da_URLWithDirtyString:(id)arg1;	// IMP=0x008000000001b372
- (id)URLWithUsername:(id)arg1;	// IMP=0x00100000000101ae
- (id)URLWithUsername:(id)arg1 withPassword:(id)arg2;	// IMP=0x001000000000ff1a
- (id)URLByRemovingLastPathComponent;	// IMP=0x001000000000fda8
- (id)URLWithoutUsername;	// IMP=0x001000000000fc7d
- (id)uri;	// IMP=0x001000000000fbad
- (id)da_pathWithoutTrailingRemovingSlash;	// IMP=0x001000000001b2b6
- (id)da_rawPath;	// IMP=0x001000000001b2a4
- (id)da_urlBySettingPath:(id)arg1;	// IMP=0x001000000001b290
- (id)da_urlBySettingPort:(id)arg1;	// IMP=0x001000000001b27c
- (id)da_urlBySettingHost:(id)arg1;	// IMP=0x001000000001b268
- (id)da_urlBySettingScheme:(id)arg1;	// IMP=0x001000000001b254
- (id)da_urlForLogging;	// IMP=0x001000000001b14c
- (id)da_urlByRemovingUsername;	// IMP=0x001000000001af0f
- (id)da_urlBySettingUsername:(id)arg1;	// IMP=0x001000000001ac97
- (id)da_urlBySettingPath:(id)arg1 keepUsername:(_Bool)arg2;	// IMP=0x001000000001a9df
- (id)da_urlBySettingPort:(id)arg1 keepUsername:(_Bool)arg2;	// IMP=0x001000000001a70f
- (id)da_urlBySettingHost:(id)arg1 keepUsername:(_Bool)arg2;	// IMP=0x001000000001a460
- (id)da_urlBySettingScheme:(id)arg1 keepUsername:(_Bool)arg2;	// IMP=0x001000000001a197
- (_Bool)da_isEqualToDAVURL:(id)arg1;	// IMP=0x0010000000019b75
- (id)da_leastInfoStringRepresentationRelativeToParentURL:(id)arg1;	// IMP=0x001000000001b6d1
@end

