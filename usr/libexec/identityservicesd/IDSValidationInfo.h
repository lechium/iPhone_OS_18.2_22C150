//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IDSValidationSession, NSDate, NSMutableArray, NSNumber;

@interface IDSValidationInfo : NSObject
{
    _Bool _isBuildingContext;	// 8 = 0x8
    _Bool _validationContextDisabled;	// 9 = 0x9
    NSDate *_validateContextDate;	// 16 = 0x10
    NSNumber *_validateContextTTL;	// 24 = 0x18
    IDSValidationSession *_validationSession;	// 32 = 0x20
    NSMutableArray *_validationContextQueue;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00200000003b052b
@property(retain, nonatomic) NSMutableArray *validationContextQueue; // @synthesize validationContextQueue=_validationContextQueue;
@property(retain, nonatomic) IDSValidationSession *validationSession; // @synthesize validationSession=_validationSession;
@property(nonatomic) _Bool validationContextDisabled; // @synthesize validationContextDisabled=_validationContextDisabled;
@property(nonatomic) _Bool isBuildingContext; // @synthesize isBuildingContext=_isBuildingContext;
@property(retain, nonatomic) NSNumber *validateContextTTL; // @synthesize validateContextTTL=_validateContextTTL;
@property(retain, nonatomic) NSDate *validateContextDate; // @synthesize validateContextDate=_validateContextDate;

@end
