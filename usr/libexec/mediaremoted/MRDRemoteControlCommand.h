//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MRPlayerPath, NSData, NSDate, NSDictionary, NSMutableDictionary, NSString;

@interface MRDRemoteControlCommand : NSObject
{
    unsigned int _commandType;	// 8 = 0x8
    NSData *_optionsData;	// 16 = 0x10
    MRPlayerPath *_playerPath;	// 24 = 0x18
    MRPlayerPath *_unresolvedPlayerPath;	// 32 = 0x20
    NSDate *_dateCreated;	// 40 = 0x28
    NSString *_senderAppDisplayID;	// 48 = 0x30
    unsigned int _appOptions;	// 56 = 0x38
    CDUnknownBlockType _completionHandler;	// 64 = 0x40
    NSMutableDictionary *_parsedOptionsDict;	// 72 = 0x48
    NSData *_cachedProtobufData;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x002000000018bbe6
@property(readonly, nonatomic) unsigned int appOptions; // @synthesize appOptions=_appOptions;
@property(readonly, nonatomic) NSString *senderAppDisplayID; // @synthesize senderAppDisplayID=_senderAppDisplayID;
@property(readonly, nonatomic) NSDate *dateCreated; // @synthesize dateCreated=_dateCreated;
@property(readonly, nonatomic) MRPlayerPath *unresolvedPlayerPath; // @synthesize unresolvedPlayerPath=_unresolvedPlayerPath;
@property(readonly, nonatomic) MRPlayerPath *playerPath; // @synthesize playerPath=_playerPath;
@property(readonly, nonatomic) unsigned int commandType; // @synthesize commandType=_commandType;
- (id)_copyWithZone:(struct _NSZone *)arg1 usingConcreteClass:(Class)arg2;	// IMP=0x001000000018bade
- (id)_optionsDictionary;	// IMP=0x001000000018ba54
- (void)_setCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000018ba27
- (CDUnknownBlockType)_completionHandler;	// IMP=0x001000000018ba11
@property(readonly, nonatomic) _Bool nowPlayingAppStackEligible;
- (id)optionValueForKey:(struct __CFString *)arg1;	// IMP=0x001000000018b780
@property(readonly, nonatomic, getter=isAVRCPCommand) _Bool avrcpCommand;
@property(readonly, nonatomic) _Bool originatedFromHID;
@property(readonly, nonatomic) _Bool originatedFromAccessory;
@property(readonly, nonatomic) _Bool shouldImplicitlyLaunchApplication;
@property(readonly, nonatomic, getter=isContextSensitive) _Bool contextSensitive;
@property(readonly, nonatomic) _Bool alwaysIgnoreDuringSharePlay;
@property(readonly, nonatomic) _Bool alwaysIgnoreDuringCall;
@property(readonly, nonatomic) NSString *senderID;
@property(readonly, nonatomic) NSString *commandID;
@property(readonly, nonatomic) NSString *remoteControlInterfaceID;
@property(readonly, nonatomic) NSData *optionsData;
@property(readonly, nonatomic) NSDictionary *options;
@property(readonly, nonatomic, getter=isNavigational) _Bool navigational;
@property(readonly, nonatomic) NSString *contextID;
@property(readonly, nonatomic) NSString *routeUID;
@property(readonly, nonatomic) NSString *destinationAppDisplayID;
@property(readonly, nonatomic) int destinationAppProcessID;
@property(readonly, nonatomic) NSData *protobufData;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000018b182
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000018b156
- (id)debugDescription;	// IMP=0x001000000018b00a
- (id)description;	// IMP=0x001000000018aef7
- (id)initWithCommandType:(unsigned int)arg1 playerPath:(id)arg2 unresolvedPlayerPath:(id)arg3 senderAppDisplayID:(id)arg4 options:(id)arg5;	// IMP=0x001000000018ae63
- (id)initWithCommandType:(unsigned int)arg1 playerPath:(id)arg2 unresolvedPlayerPath:(id)arg3 senderAppDisplayID:(id)arg4 optionsData:(id)arg5;	// IMP=0x001000000018ace5

@end

