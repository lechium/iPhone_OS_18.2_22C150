//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSArray, UIViewController;
@protocol _TtP17PasswordManagerUI34_PMTOTPMigrationControllerDelegate_;

@interface _TtC17PasswordManagerUI26_PMTOTPMigrationController : NSObject
{
    MISSING_TYPE *totpMigrationModel;	// 8 = 0x8
    MISSING_TYPE *appState;	// 16 = 0x10
    MISSING_TYPE *migrationURL;	// 0 = 0x0
    MISSING_TYPE *delegate;	// 3 = 0x3
}

- (void).cxx_destruct;	// IMP=0x0000000000022750
- (id)init;	// IMP=0x00000000000226f0
@property(nonatomic, readonly) NSArray *totpGenerators;
@property(nonatomic, readonly) long long numberOfCodes;
- (void)addGenerator:(id)arg1 toSavedAccount:(id)arg2;	// IMP=0x00000000000222a0
- (id)initWithMigrationURL:(id)arg1 delegate:(id)arg2;	// IMP=0x0000000000021d50
@property(nonatomic) __weak id <_TtP17PasswordManagerUI34_PMTOTPMigrationControllerDelegate_> delegate; // @synthesize delegate;
@property(nonatomic, retain) UIViewController *viewController; // @synthesize viewController;

@end
