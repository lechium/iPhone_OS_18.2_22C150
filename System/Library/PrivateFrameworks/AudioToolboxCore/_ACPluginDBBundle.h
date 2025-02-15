//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _ACPluginDBBundle : NSObject
{
    NSString *mFullPath;	// 8 = 0x8
    double mInfoPlistModDate;	// 16 = 0x10
    double mRsrcModDate;	// 24 = 0x18
    struct AudioComponentVector mBundleComponentVector;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x001000000029cfb0
- (id).cxx_construct;	// IMP=0x000000000029da30
- (void).cxx_destruct;	// IMP=0x000000000029da03
- (void)scanWithPriority:(int)arg1 loadable:(_Bool)arg2 infoPlistPath:(id)arg3;	// IMP=0x000000000029d21b
- (void)loadAllComponents:(void *)arg1;	// IMP=0x000000000029d203
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000029d130
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000029cff8
- (id)initWithPath:(id)arg1 infoPlistModDate:(double)arg2 rsrcModDate:(double)arg3;	// IMP=0x000000000029cfb8

@end

