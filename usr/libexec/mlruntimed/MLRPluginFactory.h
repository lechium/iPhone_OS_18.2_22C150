//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol DESBundleRegistryManaging;

@interface MLRPluginFactory : NSObject
{
    id <DESBundleRegistryManaging> _bundleRegistry;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x002000000000f0da
- (id)pluginWithBundleIdentifier:(id)arg1 errorOut:(id *)arg2;	// IMP=0x001000000000eff2
- (id)initWithBundleRegistry:(id)arg1;	// IMP=0x001000000000ef60

@end
