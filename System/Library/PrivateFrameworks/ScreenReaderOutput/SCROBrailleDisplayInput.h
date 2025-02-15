//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface SCROBrailleDisplayInput : NSObject
{
    _Bool _prepareToMemorizeNextKey;	// 8 = 0x8
    _Bool _requestPrepareToMemorizeNextKey;	// 9 = 0x9
    _Bool _memorizeNextKeyImmediately;	// 10 = 0xa
    _Bool _willMemorizeNow;	// 11 = 0xb
    _Bool _isQuiet;	// 12 = 0xc
    _Bool _newDown;	// 13 = 0xd
    _Bool _currentBrailleChordContainsSpacebar;	// 14 = 0xe
    _Bool _currentBrailleChordBeganWithSpacebar;	// 15 = 0xf
    _Bool _currentBrailleChordContainsNonSpacebarChordableKey;	// 16 = 0x10
    _Bool _spacebarIsDown;	// 17 = 0x11
    _Bool _skipBrailleKeyboardKeyTranslation;	// 18 = 0x12
    unsigned int _routerEvent;	// 20 = 0x14
    unsigned int _currentHIDCommand;	// 24 = 0x18
    unsigned int _currentBrailleModifiers;	// 28 = 0x1c
    unsigned int _downBrailleModifiers;	// 32 = 0x20
    double _quietSince;	// 40 = 0x28
    double _busySince;	// 48 = 0x30
    double _nextWillMemorizeNotificationTime;	// 56 = 0x38
    double _memorizeNextKeyImmediatelyTimeout;	// 64 = 0x40
    struct __CFArray *_currentChord;	// 72 = 0x48
    struct __CFSet *_downKeys;	// 80 = 0x50
    double _lastBrailleChordTypingTime;	// 88 = 0x58
    struct __CFArray *_currentBrailleChord;	// 96 = 0x60
    struct __CFSet *_downBrailleDots;	// 104 = 0x68
    double _lastBrailleChordPosted;	// 112 = 0x70
    double _brailleCharExponentialMovingAverage;	// 120 = 0x78
    double _brailleTranslationTimeout;	// 128 = 0x80
}

+ (id)sharedInstance;	// IMP=0x0060000000007daf
@property(nonatomic) double brailleTranslationTimeout; // @synthesize brailleTranslationTimeout=_brailleTranslationTimeout;
@property(nonatomic) double brailleCharExponentialMovingAverage; // @synthesize brailleCharExponentialMovingAverage=_brailleCharExponentialMovingAverage;
@property(nonatomic) double lastBrailleChordPosted; // @synthesize lastBrailleChordPosted=_lastBrailleChordPosted;
@property(nonatomic) unsigned int downBrailleModifiers; // @synthesize downBrailleModifiers=_downBrailleModifiers;
@property(nonatomic) unsigned int currentBrailleModifiers; // @synthesize currentBrailleModifiers=_currentBrailleModifiers;
@property(nonatomic) unsigned int currentHIDCommand; // @synthesize currentHIDCommand=_currentHIDCommand;
@property(nonatomic) struct __CFSet *downBrailleDots; // @synthesize downBrailleDots=_downBrailleDots;
@property(nonatomic) struct __CFArray *currentBrailleChord; // @synthesize currentBrailleChord=_currentBrailleChord;
@property(nonatomic) double lastBrailleChordTypingTime; // @synthesize lastBrailleChordTypingTime=_lastBrailleChordTypingTime;
@property(nonatomic) _Bool skipBrailleKeyboardKeyTranslation; // @synthesize skipBrailleKeyboardKeyTranslation=_skipBrailleKeyboardKeyTranslation;
@property(nonatomic) _Bool spacebarIsDown; // @synthesize spacebarIsDown=_spacebarIsDown;
@property(nonatomic) _Bool currentBrailleChordContainsNonSpacebarChordableKey; // @synthesize currentBrailleChordContainsNonSpacebarChordableKey=_currentBrailleChordContainsNonSpacebarChordableKey;
@property(nonatomic) _Bool currentBrailleChordBeganWithSpacebar; // @synthesize currentBrailleChordBeganWithSpacebar=_currentBrailleChordBeganWithSpacebar;
@property(nonatomic) _Bool currentBrailleChordContainsSpacebar; // @synthesize currentBrailleChordContainsSpacebar=_currentBrailleChordContainsSpacebar;
@property(nonatomic) unsigned int routerEvent; // @synthesize routerEvent=_routerEvent;
@property(nonatomic) struct __CFSet *downKeys; // @synthesize downKeys=_downKeys;
@property(nonatomic) struct __CFArray *currentChord; // @synthesize currentChord=_currentChord;
@property(nonatomic) _Bool newDown; // @synthesize newDown=_newDown;
@property(nonatomic) _Bool isQuiet; // @synthesize isQuiet=_isQuiet;
@property(nonatomic) _Bool willMemorizeNow; // @synthesize willMemorizeNow=_willMemorizeNow;
@property(nonatomic) _Bool memorizeNextKeyImmediately; // @synthesize memorizeNextKeyImmediately=_memorizeNextKeyImmediately;
@property(nonatomic) _Bool requestPrepareToMemorizeNextKey; // @synthesize requestPrepareToMemorizeNextKey=_requestPrepareToMemorizeNextKey;
@property(nonatomic) _Bool prepareToMemorizeNextKey; // @synthesize prepareToMemorizeNextKey=_prepareToMemorizeNextKey;
@property(nonatomic) double memorizeNextKeyImmediatelyTimeout; // @synthesize memorizeNextKeyImmediatelyTimeout=_memorizeNextKeyImmediatelyTimeout;
@property(nonatomic) double nextWillMemorizeNotificationTime; // @synthesize nextWillMemorizeNotificationTime=_nextWillMemorizeNotificationTime;
@property(nonatomic) double busySince; // @synthesize busySince=_busySince;
@property(nonatomic) double quietSince; // @synthesize quietSince=_quietSince;
- (void)dealloc;	// IMP=0x0000000000007d26

@end

