//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ScreenReaderCore/SCRCArgumentParser.h>

@interface VOTMain : SCRCArgumentParser
{
    struct __CFRunLoopSource *_serverSource;	// 8 = 0x8
    _Bool _logMaskSet;	// 16 = 0x10
    _Bool _muteSpeech;	// 17 = 0x11
    _Bool _muteSound;	// 18 = 0x12
    _Bool _hintsEnabled;	// 19 = 0x13
    _Bool _testingMode;	// 20 = 0x14
    _Bool _speechLogging;	// 21 = 0x15
    _Bool _commandHelpEnabled;	// 22 = 0x16
    _Bool _keepAlive;	// 23 = 0x17
}

+ (id)commandPath;	// IMP=0x0040000000003878
+ (id)versionString;	// IMP=0x001000000000386b
+ (id)processIdentifier;	// IMP=0x001000000000385e
@property(nonatomic) _Bool keepAlive; // @synthesize keepAlive=_keepAlive;
- (id)_setCommandHelpEnabled:(id)arg1;	// IMP=0x0010000000004067
- (id)_setLogMask:(id)arg1;	// IMP=0x0010000000003fee
- (id)_setMuteSpeech:(id)arg1;	// IMP=0x0010000000003fad
- (id)_setMuteSound:(id)arg1;	// IMP=0x0010000000003f6c
- (id)_setHintsEnabled:(id)arg1;	// IMP=0x0010000000003f2b
- (id)_setSpeechLogging:(id)arg1;	// IMP=0x0010000000003f0d
- (void)stop;	// IMP=0x0010000000003ec5
- (int)run;	// IMP=0x0010000000003adb
- (void)_registerMachServer;	// IMP=0x0010000000003885
- (void)dealloc;	// IMP=0x0010000000003815
- (id)initWithArgc:(int)arg1 argv:(const char **)arg2;	// IMP=0x00100000000036b5

@end

