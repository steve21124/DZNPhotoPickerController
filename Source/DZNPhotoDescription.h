//
//  DZNPhotoDescription.h
//  DZNPhotoPickerController
//  https://github.com/dzenbot/DZNPhotoPickerController
//
//  Created by Ignacio Romero Zurbuchen on 10/5/13.
//  Copyright (c) 2014 DZN Labs. All rights reserved.
//  Licence: MIT-Licence
//

#import <Foundation/Foundation.h>

/*
 * The data model to encapsulate meta data about a photo, provided by the photo service.
 */
@interface DZNPhotoDescription : NSObject
@property (nonatomic, copy) NSString *remoteID;
/* The title assigned by the author. */
@property (nonatomic, copy) NSString *title;
/* The name of the author. */
@property (nonatomic, copy) NSString *authorName;
@property (nonatomic, copy) NSString *authorUsername;
@property (nonatomic, copy) NSString *authorURL;
@property (nonatomic, copy) NSString *authorURLPic;
/* The url of the thumb version. */
@property (nonatomic, copy) NSURL *thumbURL;
/* The url of the full size version. */
@property (nonatomic, copy) NSURL *fullURL;
/* The name of the photo service. */
@property (nonatomic, copy) NSString *sourceName;

@property (nonatomic, copy) NSString *category;
@property (nonatomic, copy) NSDate *createdAt;
@property (nonatomic, copy) NSString *description;
@property (nonatomic, copy) NSNumber *favoriteCount;
@property (nonatomic, copy) NSNumber *imageHeight;
@property (nonatomic, copy) NSNumber *imageWidth;
@property (nonatomic, copy) NSString *nsfw;
@property (nonatomic, copy) NSString *privacy;
@property (nonatomic, copy) NSString *rating;
@property (nonatomic, copy) NSNumber *commentCount;
@property (nonatomic, copy) NSNumber *viewCount;
@property (nonatomic, copy) NSNumber *voteCount;



/*
 * Allocates a new instance of the DZNPhotoDescription class, sends it an init message, and returns the initialized object with property values.
 *
 * @param title The title assigned by the author.
 * @param authorName The name of the author.
 * @param thumbURL The url of the thumb version.
 * @param fullURL The url of the full size version.
 * @param sourceName The name of the photo service.
 */
+ (instancetype)photoDescriptionWithTitle:(NSString*)remoteID title:(NSString *)title authorName:(NSString *)authorName
                           authorUsername:(NSString*)authorUsername authorURL:(NSString*)authorURL authorURLPic:(NSString*)authorURLPic
                                 thumbURL:(NSURL *)thumbURL fullURL:(NSURL *)fullURL sourceName:(NSString *)sourceName category:(NSString *)category createdAt:(NSDate *)createdAt description:(NSString *)description favoriteCount:(NSNumber *)favoriteCount imageHeight:(NSNumber *)imageHeight imageWidth:(NSNumber *)imageWidth nsfw:(NSString *)nsfw privacy:(NSString *)privacy rating:(NSString *)rating commentCount:(NSNumber *)commentCount viewCount:(NSNumber *)viewCount voteCount:(NSNumber *)voteCount;

@end
