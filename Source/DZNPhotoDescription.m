//
//  DZNPhotoDescription.m
//  DZNPhotoPickerController
//  https://github.com/dzenbot/DZNPhotoPickerController
//
//  Created by Ignacio Romero Zurbuchen on 10/5/13.
//  Copyright (c) 2014 DZN Labs. All rights reserved.
//  Licence: MIT-Licence
//

#import "DZNPhotoDescription.h"

@implementation DZNPhotoDescription

+ (instancetype)photoDescriptionWithTitle:(NSString*)remoteID title:(NSString *)title authorName:(NSString *)authorName
                           authorUsername:(NSString*)authorUsername authorURL:(NSString*)authorURL authorURLPic:(NSString*)authorURLPic
                                 thumbURL:(NSURL *)thumbURL fullURL:(NSURL *)fullURL sourceName:(NSString *)sourceName category:(NSString *)category createdAt:(NSDate *)createdAt description:(NSString *)description favoriteCount:(NSNumber *)favoriteCount imageHeight:(NSNumber *)imageHeight imageWidth:(NSNumber *)imageWidth nsfw:(NSString *)nsfw privacy:(NSString *)privacy rating:(NSString *)rating commentCount:(NSNumber *)commentCount viewCount:(NSNumber *)viewCount voteCount:(NSNumber *)voteCount
{
    DZNPhotoDescription *photo = [DZNPhotoDescription new];
    photo.remoteID = remoteID;
    photo.title = title;
    photo.authorName = authorName;
    photo.authorUsername = authorUsername;
    photo.authorURL = photo.authorURL;
    photo.authorURLPic = photo.authorURLPic;
    photo.thumbURL = thumbURL;
    photo.fullURL = fullURL;
    photo.sourceName = sourceName;
    photo.category = category;
    photo.createdAt = createdAt;
    photo.description = description;
    photo.favoriteCount = favoriteCount;
    photo.imageHeight = imageHeight;
    photo.imageWidth = imageWidth;
    photo.nsfw = nsfw;
    photo.privacy = privacy;
    photo.rating = rating;
    photo.commentCount = commentCount;
    photo.viewCount = viewCount;
    photo.voteCount = voteCount;
    
    return photo;
}

@end


