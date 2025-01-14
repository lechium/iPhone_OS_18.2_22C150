//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSSet, NSString, NSURL;

@interface RMConfigurationSubscriberServicePlugin : NSObject
{
    NSString *_identifier;	// 8 = 0x8
    NSSet *_configurationTypes;	// 16 = 0x10
    NSURL *_url;	// 24 = 0x18
}

+ (_Bool)_validPluginWithURL:(id)arg1;	// IMP=0x002000000002f24f
+ (id)loadPlugins;	// IMP=0x001000000002f00e
- (void).cxx_destruct;	// IMP=0x0020000000030030
@property(readonly, copy, nonatomic) NSURL *url; // @synthesize url=_url;
@property(readonly, copy, nonatomic) NSSet *configurationTypes; // @synthesize configurationTypes=_configurationTypes;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (id)_serviceConnection;	// IMP=0x001000000002ff57
- (id)reportDetails;	// IMP=0x001000000002fddb
- (void)fetchMissingConfigurationUIs;	// IMP=0x001000000002fbda
- (void)applyChangedConfigurationsTypes:(id)arg1;	// IMP=0x001000000002f9d9
- (id)initWithURL:(id)arg1 identifier:(id)arg2 configurationTypes:(id)arg3;	// IMP=0x001000000002f7ec
- (id)initWithURL:(id)arg1;	// IMP=0x001000000002f4ae

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

