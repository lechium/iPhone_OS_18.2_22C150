//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class BSKeyedSettings, FBSSceneIdentityToken, NSString;

@protocol FBSSceneClientSettings
@property(copy, nonatomic) FBSSceneIdentityToken *preferredSceneHostIdentity;
@property(copy, nonatomic) NSString *preferredSceneHostIdentifier;
@property(nonatomic) long long preferredInterfaceOrientation;
@property(nonatomic) double preferredLevel;
@property(retain, nonatomic) BSKeyedSettings *layers;
@end
