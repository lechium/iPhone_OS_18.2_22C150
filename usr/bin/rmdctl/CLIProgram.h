//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol CLIProgramDelegate;

@interface CLIProgram : NSObject
{
    NSString *_programName;	// 8 = 0x8
    NSObject *_runLoopStateLock;	// 16 = 0x10
    long long _runLoopState;	// 24 = 0x18
    id <CLIProgramDelegate> _delegate;	// 32 = 0x20
    NSString *_commandName;	// 40 = 0x28
}

+ (id)nextOptionParser;	// IMP=0x002000000001b840
+ (void)handleFormatOptionInDictionary:(id)arg1;	// IMP=0x001000000001b7f4
+ (_Bool)handleFormatOption:(id)arg1 longOption:(id)arg2 argument:(id)arg3;	// IMP=0x001000000001b682
+ (void)registerGlobalFormatOption;	// IMP=0x001000000001b642
+ (id)sharedProgram;	// IMP=0x001000000001b504
+ (id)commandToOptionsDict;	// IMP=0x001000000001a6ac
+ (id)globalOptionSet;	// IMP=0x001000000001a693
- (void).cxx_destruct;	// IMP=0x002000000001c489
@property(readonly, copy, nonatomic) NSString *commandName;
@property(copy, nonatomic) NSString *programName; // @synthesize programName=_programName;
@property(retain, nonatomic) id <CLIProgramDelegate> delegate; // @synthesize delegate=_delegate;
- (void)endRunLoopWithSuccess:(_Bool)arg1;	// IMP=0x001000000001c37a
- (_Bool)startRunLoop;	// IMP=0x001000000001c17e
- (int)main;	// IMP=0x001000000001bf07
- (void)registerAllCLICommands;	// IMP=0x001000000001bc13
- (id)init;	// IMP=0x001000000001b5e4

@end

