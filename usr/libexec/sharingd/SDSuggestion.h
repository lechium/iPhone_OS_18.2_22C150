//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class INImage, NSArray, NSString, _PSSuggestion;

@interface SDSuggestion : NSObject
{
    _Bool _isPlaceholder;	// 8 = 0x8
    _PSSuggestion *_suggestion;	// 16 = 0x10
    NSString *_displayName;	// 24 = 0x18
    NSArray *_handles;	// 32 = 0x20
    NSArray *_formattedHandles;	// 40 = 0x28
    NSArray *_contactsIdentifiers;	// 48 = 0x30
    NSString *_transportBundleIdentifier;	// 56 = 0x38
    NSString *_conversationIdentifier;	// 64 = 0x40
    NSString *_derivedIntentIdentifier;	// 72 = 0x48
    NSString *_groupName;	// 80 = 0x50
    NSArray *_recipients;	// 88 = 0x58
    NSArray *_contacts;	// 96 = 0x60
    long long _transientContactsCount;	// 104 = 0x68
    INImage *_image;	// 112 = 0x70
    NSString *_reason;	// 120 = 0x78
}

+ (id)placeholderSuggestion;	// IMP=0x0040000000015fc6
- (void).cxx_destruct;	// IMP=0x002000000001752b
@property(nonatomic) _Bool isPlaceholder; // @synthesize isPlaceholder=_isPlaceholder;
@property(copy, nonatomic) NSString *reason; // @synthesize reason=_reason;
@property(retain, nonatomic) INImage *image; // @synthesize image=_image;
@property(nonatomic) long long transientContactsCount; // @synthesize transientContactsCount=_transientContactsCount;
@property(copy, nonatomic) NSArray *contacts; // @synthesize contacts=_contacts;
@property(copy, nonatomic) NSArray *recipients; // @synthesize recipients=_recipients;
@property(copy, nonatomic) NSString *groupName; // @synthesize groupName=_groupName;
@property(copy, nonatomic) NSString *derivedIntentIdentifier; // @synthesize derivedIntentIdentifier=_derivedIntentIdentifier;
@property(copy, nonatomic) NSString *conversationIdentifier; // @synthesize conversationIdentifier=_conversationIdentifier;
@property(copy, nonatomic) NSString *transportBundleIdentifier; // @synthesize transportBundleIdentifier=_transportBundleIdentifier;
@property(copy, nonatomic) NSArray *contactsIdentifiers; // @synthesize contactsIdentifiers=_contactsIdentifiers;
@property(copy, nonatomic) NSArray *formattedHandles; // @synthesize formattedHandles=_formattedHandles;
@property(copy, nonatomic) NSArray *handles; // @synthesize handles=_handles;
@property(copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
// Error: Property attributes should begin with the type ('T') attribute, property name: suggestion
// Property attributes: (null)

- (void)_requestSandboxExtensionForDonatedImage:(id)arg1;	// IMP=0x001000000001726d
- (id)createPeopleSuggestion;	// IMP=0x0010000000017057
- (id)_caseSensitiveBundleIDFromBundleID:(id)arg1;	// IMP=0x0010000000016fcd
- (void)_configure;	// IMP=0x0010000000016089
- (id)initWithSuggestion:(id)arg1;	// IMP=0x001000000001600e

@end
