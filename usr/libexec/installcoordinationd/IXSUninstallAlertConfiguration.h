//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableArray, NSString;

@interface IXSUninstallAlertConfiguration : NSObject
{
    NSMutableArray *_buttonDefinitions;	// 8 = 0x8
    NSMutableArray *_actionDefinitions;	// 16 = 0x10
    NSString *_title;	// 24 = 0x18
    NSString *_message;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0020000000045132
@property(retain, nonatomic) NSString *message; // @synthesize message=_message;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSMutableArray *actionDefinitions; // @synthesize actionDefinitions=_actionDefinitions;
@property(retain, nonatomic) NSMutableArray *buttonDefinitions; // @synthesize buttonDefinitions=_buttonDefinitions;
@property(readonly, nonatomic) NSDictionary *alertParameters;
@property(readonly, nonatomic) unsigned long long numButtons;
- (CDUnknownBlockType)actionForButtonAtIndex:(unsigned long long)arg1;	// IMP=0x0010000000044d61
- (void)addButtonDefinition:(id)arg1 forAction:(CDUnknownBlockType)arg2;	// IMP=0x0010000000044c86
- (id)initWithTitle:(id)arg1 message:(id)arg2;	// IMP=0x0010000000044b8f

@end

