//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface CLAvengerScannerSettings : NSObject
{
    NSDictionary *_otaSettings;	// 8 = 0x8
}

- (double)longAggressiveScanCoexImpactedDuration;	// IMP=0x0020000000c7e2ac
- (double)longAggressiveScanNonCoexImpactedDuration;	// IMP=0x0010000000c7e26d
- (double)getSettings:(id)arg1;	// IMP=0x0010000000c7e133
- (id)settingsDictionary;	// IMP=0x0010000000c7e046
- (void)dealloc;	// IMP=0x0010000000c7e00b
- (id)initWithUniverse:(id)arg1;	// IMP=0x0010000000c7dfe8

@end

